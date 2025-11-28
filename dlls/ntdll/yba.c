#include <stdarg.h>
#include "ntstatus.h"
#include "winternl.h"


//tiny function just to see if I can get something I can call in ntdll.dll 
NTSTATUS NtYbaTest(int* out) {

    if(out) {
        *out = 42;
    }

    return STATUS_SUCCESS;
}
