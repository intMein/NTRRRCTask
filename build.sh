rm -rf ./build
mkdir build
gcc -Isrc -I. -o build/client address_util.c client.c rrc_coder.c src/*.c -lsctp -DPDU=S1SetupRequest -DASN_DISABLE_OER_SUPPORT
gcc -Isrc -I. -o build/server address_util.c server.c rrc_parser.c src/*.c -lsctp -DPDU=S1SetupRequest -DASN_DISABLE_OER_SUPPORT