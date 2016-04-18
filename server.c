/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "rpc.h"
#include <stdio.h>
#include <stdlib.h>

client_data messages[100] = {{-1, ""}};

int *put_1_svc(struct client_data *argp, struct svc_req *rqstp) {
	static int  result;
	int id = argp->client_id;
	
	int i = 0;
	while(messages[i].client_id != -1 && strcmp(messages[i].client_msg, "")) {
		messages[i] = *argp;
		break;
	}

	result = printf("Server: %s, %d\n", messages[0].client_msg, messages[0].client_id);
	return (&result);
}

int *
get_1_svc(void *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}
