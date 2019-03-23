#include <stdio.h>
#include <regex.h>
#include <string.h>
 
int match(const char *string, const char *pattern)
{
    regex_t re;
    if (regcomp(&re, pattern, REG_EXTENDED|REG_NOSUB) != 0){
        return 0;
    }
    int status = regexec(&re, string, 0, NULL, 0);
    regfree(&re);
    if (status != 0){
        return 0;
    }
    return 1;
}
 
int main(void)
{
    char ip[35];
	const char* regexValidIp = "(([0-9][0-9][0-9])|([0-9][0-9])|[0-9]).(([0-9][0-9][0-9])|([0-9][0-9])|[0-9]).(([0-9][0-9][0-9])|([0-9][0-9])|[0-9]).(([0-9][0-9][0-9])|([0-9][0-9])|[0-9])";

	scanf("%s", ip);
	if(match(ip, regexValidIp))
		printf("%s eh um ip valido", ip);
	else
		printf("%s nao eh um ip valido", ip);
}