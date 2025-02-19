#ifndef LIGHTNING_COMMON_HSM_VERSION_H
#define LIGHTNING_COMMON_HSM_VERSION_H
#include "config.h"

/* We give a maximum and minimum compatibility version to HSM, to allow
 * some API adaptation. */

/* wire/hsmd_wire.csv contents by version:
 * v1: 409cffa355ab6cc76bd298910adca9936a68223267ddc4815ba16aeac5d0acc3
 * v2: dd89bf9323dff42200003fb864abb6608f3aa645b636fdae3ec81d804ac05196
 * v3: edd3d288fc88a5470adc2f99abcbfe4d4af29fae0c7a80b4226f28810a815524
 * v3 without v1: 3f813898f7de490e9126ab817e1c9a29af79c0413d5e37068acedce3ea7b5429
 * v4: 41a730986c51b930e2d8d12b3169d24966c2004e08d424bdda310edbbde5ba70
 * v4 with check_pubkey: 48b3992745aa3c6ab6ce5cdaee9082cb7d70017f523d322015e9710bf49fd193
 */
#define HSM_MIN_VERSION 3
#define HSM_MAX_VERSION 4
#endif /* LIGHTNING_COMMON_HSM_VERSION_H */
