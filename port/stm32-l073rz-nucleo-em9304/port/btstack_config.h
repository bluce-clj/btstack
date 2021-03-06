//
// btstack_config.h for EM9304 DVK
//

#ifndef __BTSTACK_CONFIG
#define __BTSTACK_CONFIG

// Port related features
#define HAVE_EMBEDDED_TIME_MS
#define HAVE_EM9304_PATCH_CONTAINER

// BTstack features that can be enabled
#define ENABLE_BLE
#define ENABLE_LE_PERIPHERAL
#define ENABLE_LE_CENTRAL
#define ENABLE_LE_DATA_LENGTH_EXTENSION
#define ENABLE_LOG_INFO
#define ENABLE_LOG_ERROR
#define ENABLE_SEGGER_RTT

// BTstack configuration. buffers, sizes, ...
#define HCI_ACL_PAYLOAD_SIZE 100
#define MAX_NR_WHITELIST_ENTRIES 1
#define MAX_NR_HCI_CONNECTIONS 1
#define MAX_NR_SM_LOOKUP_ENTRIES 3
#define MAX_NR_L2CAP_SERVICES 1
#define MAX_NR_L2CAP_CHANNELS 1
#define MAX_NR_GATT_CLIENTS 1

// LE Device DB using TLV on top of Flash Sector interface
#define NVM_NUM_DEVICE_DB_ENTRIES 16

#endif
