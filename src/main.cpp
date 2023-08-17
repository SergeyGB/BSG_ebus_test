#include <stdio.h>
#include "device.h"

namespace ebusd {

int main(int argc, char* argv[], char* envp[])
{
    printf("Hello World from PlatformIO!\n");

    Device *device = Device::create("/dev/t", s_opt .extraLatency, !s_opt.noDeviceCheck, s_opt.readOnly,
                                  s_opt.initialSend);


    return 0;
}

}


int main(int argc, char* argv[], char* envp[]) {
  return ebusd::main(argc, argv, envp);
}