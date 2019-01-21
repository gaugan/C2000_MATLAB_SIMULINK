function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["Blinky:7"] = "Blinky.h:55&Blinky_data.c:25";
	/* <Root>/Constant1 */
	this.urlHashMap["Blinky:8"] = "Blinky.h:58&Blinky_data.c:28";
	/* <Root>/Constant2 */
	this.urlHashMap["Blinky:9"] = "Blinky.h:61&Blinky_data.c:31";
	/* <Root>/Constant3 */
	this.urlHashMap["Blinky:10"] = "Blinky.h:64&Blinky_data.c:34";
	/* <Root>/LED1 */
	this.urlHashMap["Blinky:1"] = "Blinky.c:88,130";
	/* <Root>/LED2 */
	this.urlHashMap["Blinky:2"] = "Blinky.c:97,136";
	/* <Root>/LED3 */
	this.urlHashMap["Blinky:3"] = "Blinky.c:106,142";
	/* <Root>/LED4 */
	this.urlHashMap["Blinky:4"] = "Blinky.c:115,148";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Blinky"};
	this.sidHashMap["Blinky"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Blinky:7"};
	this.sidHashMap["Blinky:7"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "Blinky:8"};
	this.sidHashMap["Blinky:8"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Constant2"] = {sid: "Blinky:9"};
	this.sidHashMap["Blinky:9"] = {rtwname: "<Root>/Constant2"};
	this.rtwnameHashMap["<Root>/Constant3"] = {sid: "Blinky:10"};
	this.sidHashMap["Blinky:10"] = {rtwname: "<Root>/Constant3"};
	this.rtwnameHashMap["<Root>/LED1"] = {sid: "Blinky:1"};
	this.sidHashMap["Blinky:1"] = {rtwname: "<Root>/LED1"};
	this.rtwnameHashMap["<Root>/LED2"] = {sid: "Blinky:2"};
	this.sidHashMap["Blinky:2"] = {rtwname: "<Root>/LED2"};
	this.rtwnameHashMap["<Root>/LED3"] = {sid: "Blinky:3"};
	this.sidHashMap["Blinky:3"] = {rtwname: "<Root>/LED3"};
	this.rtwnameHashMap["<Root>/LED4"] = {sid: "Blinky:4"};
	this.sidHashMap["Blinky:4"] = {rtwname: "<Root>/LED4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
