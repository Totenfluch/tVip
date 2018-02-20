# tVip
Add Vips for a limited time and give those a flag of your choice

This Plugin allows you to add Vips on the fly to your Server, extend their Status or Remove them.
You can also lookup the details of Vips in a simple to use Menu.

The Plugin was designed for Large Communities that run a big amount of servers.
This is why it has a live MySQL Sync. This means no data is stored locally and everything is instantly synced to the database to allow a seamless workflow.

## Installation:
- IT WON'T WORK WITHOUT DOING THIS -
- The default MySQL config is tVip which needs to be added to your database.cfg.
- If you want another name, change line 13 in the .sp

## Commands:
- sm_tvip - Root Flag - Opens the tVip Admin menu
- sm_addvip "[SteamID]" [Duration in Month] "[Name]" - Root Flag - Add a Vip manually (offline)
- sm_vips - no flag - Shows all VIPs
- sm_vip - Displays the Start date, End date and duration of the Status in a menu


https://forums.alliedmods.net/showthread.php?t=292183

## Natives

```
/** 
 * Grant vip to a client. 
 * 
 * @param admin          Admin that set VIP. 
 * @param client         Client that will recive VIP. 
 * @param duration        Vip duration. 
 * @param format         Time format, 1 = Minutes - 0 = Month. 
 * @noreturn 
 * @error                Invalid client/admin Index or invalid format. 
 */ 
native void tVip_GrantVip(int client, int admin, int duration, int format = 1); 
```

```
/** 
 * Delete Vip from database. 
 * 
 * @param SteamId          Client SteamID. 
 * @noreturn 
 */ 
native void tVip_DeleteVip(char SteamId[20]);  
```
