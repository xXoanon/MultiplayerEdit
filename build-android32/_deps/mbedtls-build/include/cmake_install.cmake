# Install script for directory: /home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/opt/android-sdk/ndk/28.2.13676358/toolchains/llvm/prebuilt/linux-x86_64/bin/llvm-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mbedtls" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/aes.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/aesni.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/arc4.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/aria.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/asn1.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/asn1write.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/base64.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/bignum.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/blowfish.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/bn_mul.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/camellia.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ccm.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/certs.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/chacha20.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/chachapoly.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/check_config.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/cipher.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/cipher_internal.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/cmac.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/compat-1.3.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/config.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/config_psa.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/constant_time.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ctr_drbg.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/debug.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/des.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/dhm.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ecdh.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ecdsa.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ecjpake.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ecp.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ecp_internal.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/entropy.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/entropy_poll.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/error.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/gcm.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/havege.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/hkdf.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/hmac_drbg.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/md.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/md2.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/md4.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/md5.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/md_internal.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/memory_buffer_alloc.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/net.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/net_sockets.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/nist_kw.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/oid.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/padlock.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/pem.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/pk.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/pk_internal.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/pkcs11.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/pkcs12.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/pkcs5.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/platform.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/platform_time.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/platform_util.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/poly1305.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/psa_util.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ripemd160.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/rsa.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/rsa_internal.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/sha1.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/sha256.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/sha512.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ssl.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ssl_cache.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ssl_ciphersuites.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ssl_cookie.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ssl_internal.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/ssl_ticket.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/threading.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/timing.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/version.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/x509.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/x509_crl.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/x509_crt.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/x509_csr.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/mbedtls/xtea.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/psa" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_builtin_composites.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_builtin_primitives.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_compat.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_config.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_driver_common.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_driver_contexts_composites.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_driver_contexts_primitives.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_extra.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_platform.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_se_driver.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_sizes.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_struct.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_types.h"
    "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-src/include/psa/crypto_values.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/d050/Coding/Me Coding/MultiplayerEdit/build-android32/_deps/mbedtls-build/include/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
