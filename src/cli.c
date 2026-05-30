#include <stdio.h>
#include <string.h>

#include "packetlens/cli.h"
#include "packetlens/version.h"

static void print_help(void) {
    printf("PacketLens-C - lightweight packet sniffer\n");
    printf("\n");
    printf("Usage:\n");
    printf("  packetlens [options]\n");
    printf("\n");
    printf("Options:\n");
    printf("  -h, --help       Show this help message\n");
    printf("  -v, --version    Show version information\n");
}

static void print_version(void) {
    printf("PacketLens-C  %s\n", PACKETLENS_VERSION);
}

int packetlens_handle_args(int argc, char *argv[]){
    if (argc == 1){
        printf("PacketLens-C starting...\n");
        return 0;
    }

    if (argc > 2) {
        fprintf(stderr, "error: too many arguments\n");
        fprintf(stderr, "Try 'packetlens --help' for usage.\n");
        return 1;
    }

    if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0){
        print_help();
        return 0;
    }

    if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0){
        print_version();
        return 0;
    }

    fprintf(stderr, "error: unknown option '%s'\n", argv[1]);
    fprintf(stderr, "Try 'packetlens --help' for usage.\n");

    return 1;
}