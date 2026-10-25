#include <stdio.h>
#include <pcap/pcap.h>

#include "packetlens/capture.h"

static void print_dev_list(pcap_if_t *alldevs) {
    pcap_if_t *dev;
    for (dev = alldevs; dev != NULL; dev = dev->next) {
        printf("Device: %s\n", dev->name);
        if (dev->description) {
            printf("Description: %s\n", dev->description);
        }
    }
}

int packetlens_start_capture(void) {
    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_if_t *alldevs = NULL;

    if (pcap_findalldevs(&alldevs, errbuf) == -1) {
        fprintf(stderr, "Error in pcap_findalldevs: %s\n", errbuf);
        return 1;
    } 
    
    if (alldevs == NULL) {
        fprintf(stderr, "No interfaces found.\n");
        return 1;
    }

    print_dev_list(alldevs);

    pcap_freealldevs(alldevs);
    return 0;
}

