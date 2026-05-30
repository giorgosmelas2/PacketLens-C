# PacketLens-C

PacketLens-C is a lightweight Linux packet sniffing and protocol inspection tool written in C.

The goal of the project is to build a small, educational "mini-Wireshark" for the terminal while practicing C, Linux networking, project structure, documentation, and disciplined Git workflow.

## Current Status

Early project setup.

The program currently builds and runs a minimal entry point:

```bash
make
./packetlens
```

Expected output:

```text
PacketLens-C starting...
```

## Planned Features

- Capture packets from a Linux network interface
- Parse Ethernet frames
- Parse IPv4 packets
- Display TCP, UDP, and ICMP metadata
- Add CLI options for interface selection and filtering
- Add readable terminal output and optional structured output
- Add parser tests using sample packet data

## Development Environment

This project is intended to run on Linux or WSL.

Recommended packages:

```bash
sudo apt update
sudo apt install build-essential make gdb libpcap-dev
```

## Build

```bash
make
```

## Run

```bash
./packetlens
```

Packet capture features may require elevated privileges later:

```bash
sudo ./packetlens
```

## Roadmap

1. Project skeleton and CLI
2. Basic packet capture with libpcap
3. Ethernet parser
4. IPv4 parser
5. TCP, UDP, and ICMP parsers
6. Filters and output formatting
7. Tests and example captures
