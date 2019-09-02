#include <stdio.h>
#include <jwt.h>
#include "base64.h"
#include <time.h>
int main() {
//    char* jwtCookieValChrPtr="eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.e30.E_IOBApX-vSoLiqxCJqRQWCOcTVK1RibJ1rmAerFhnI";
//    printf("Hello, World!\n");
//    printf(jwtCookieValChrPtr);
//    printf("\n");
//
//    {
//        int jwtParseReturnCode;
//        char *keyBinary = NULL;
//        jwt_t *jwt = NULL;
//        int keylen;
//        jwtParseReturnCode = jwt_decode(&jwt, jwtCookieValChrPtr, keyBinary, keylen);
//        printf("%d",jwtParseReturnCode);
//        printf("\n");
//    }
    
    {
        char* jwtCookieValChrPtr="eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJzdWIiOiJzb21lLWxvbmctdXVpZCIsImZpcnN0TmFtZSI6ImhlbGxvIiwgImxhc3ROYW1lIjoid29ybGQiLCJlbWFpbEFkZHJlc3MiOiJoZWxsb3dvcmxkQGV4YW1wbGUuY29tIiwgInJvbGVzIjpbInRoaXMiLCJ0aGF0IiwidGhlb3RoZXIiXSwgImlzcyI6Imlzc3VlciIsInBlcnNvbklkIjoiNzViYjNjYzctYjkzMy00NGYwLTkzYzYtMTQ3YjA4MmZhZGI1IiwgImV4cCI6MTkwODgzNTIwMCwiaWF0IjoxNDg4ODE5NjAwLCJ1c2VybmFtZSI6ImhlbGxvLndvcmxkIn0.TvDD63ZOqFKgE-uxPDdP5aGIsbl5xPKz4fMul3Zlti4";
        int jwtParseReturnCode;
        char *keyBinary = NULL;
        jwt_t *jwt = NULL;
        int keylen;
        jwtParseReturnCode = jwt_decode(&jwt, jwtCookieValChrPtr, keyBinary, keylen);
        printf("-- %d",jwtParseReturnCode);
        printf("\n");
    }
    {
        char* jwtCookieValChrPtr="eyJhIjoiZCIsImIiOiJkIiwidHlwIjoiSldUIiwiYyI6eyJhIjoiZCIsImIiOiJkIiwiYyI6eyJhIjoiZCIsImIiOiJkIn19LCJhbGciOiJIUzI1NiJ9.eyJmaXJzdE5hbWUiOiJoZWxsbyIsIm5iZiI6MTQ4ODgxOTYwMCwiZXhwIjoxOTA4ODM1MjAwfQ.3RUWVfMj0OITHnr_SyvSnqxxUbeti_RC0XarrygKFAk";
        int jwtParseReturnCode;
        char *keyBinary = "00112233445566778899AABBCCDDEEFF00112233445566778899AABBCCDDEEFF";
        jwt_t *jwt = NULL;
        int keylen;
        time_t exp;
        time_t now;

        keylen=strlen(keyBinary);
        jwtParseReturnCode = jwt_decode(&jwt, jwtCookieValChrPtr, keyBinary, keylen);
        printf("-- %d",jwtParseReturnCode);
        printf("\n");
        
        printf("-- %s",jwt_get_headers_json(jwt,NULL));
        printf("\n");
        exp = (time_t)jwt_get_grant_int(jwt, "exp");
        printf("----%d",exp);
        printf("\n");
        printf("--s--%s",(u_char *) jwt_encode_str(jwt));
        printf("\n");
    }
    
//    {
//        char *plain_dst="MTIzNDU2Nzg5MGFiY2RlZmdoaWprbG1ub3BxcnN0dXZ3eHl6";
//        const char coded_src[2048];
//        printf("Hello, World!\n");
//        jwt_Base64decode( coded_src,plain_dst);
//        printf("Hello, World!\n");
//        printf("%s",coded_src);
//    }
    return 0;
    
}
