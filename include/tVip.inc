/*
**
*/
#if defined _tVip_included
 #endinput
#endif
#define _tVip_included


/**
 * Grant vip to a client.
 *
 * @param admin  		Admin that set VIP.
 * @param client 		Client that will recive VIP
 * @param duration		Vip duration	
 * @param reason 		Duration time format: if = 3 in minutes otherwise in month
 * @noreturn
 */
native void tVip_GrantVip(int admin, int client, int duration, int reason = 1);



/**
 * Grant vip to an offine client.
 *
 * @param admin  		Admin that set VIP.
 * @param client 		Client SteamID that will VIP
 * @param duration		Vip duration in month	
 * @param PlayerName	Name of the client that will recive the VIP
 * @noreturn
 */
native void tVip_GrantVipEx(int admin, char SteamId[20], int duration, char[] PlayerName);


/**
 * Delete Vip from database.
 *
 * @param SteamId  		Client SteamID.
 * @noreturn
 */
native void tVip_DeleteVip(char SteamId[20]);


public SharedPlugin __pl_tvip =
{
	name = "tVIP",
	file = "tVip.smx",
	#if defined REQUIRE_PLUGIN
	required = 1,
	#else
	required = 0,
	#endif
};
