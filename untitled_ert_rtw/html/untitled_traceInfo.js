function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["untitled:8"] = "untitled.c:30,35,40,45&untitled.h:54&untitled_data.c:48";
	/* <Root>/LED */
	this.urlHashMap["untitled:1"] = "untitled.c:29,58,74&untitled.h:42&untitled_data.c:25";
	/* <Root>/LED1 */
	this.urlHashMap["untitled:2"] = "untitled.c:34,61,77&untitled.h:45&untitled_data.c:31";
	/* <Root>/LED2 */
	this.urlHashMap["untitled:3"] = "untitled.c:39,64,80&untitled.h:48&untitled_data.c:37";
	/* <Root>/LED3 */
	this.urlHashMap["untitled:4"] = "untitled.c:44,67,83&untitled.h:51&untitled_data.c:43";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "untitled:8"};
	this.sidHashMap["untitled:8"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/LED"] = {sid: "untitled:1"};
	this.sidHashMap["untitled:1"] = {rtwname: "<Root>/LED"};
	this.rtwnameHashMap["<Root>/LED1"] = {sid: "untitled:2"};
	this.sidHashMap["untitled:2"] = {rtwname: "<Root>/LED1"};
	this.rtwnameHashMap["<Root>/LED2"] = {sid: "untitled:3"};
	this.sidHashMap["untitled:3"] = {rtwname: "<Root>/LED2"};
	this.rtwnameHashMap["<Root>/LED3"] = {sid: "untitled:4"};
	this.sidHashMap["untitled:4"] = {rtwname: "<Root>/LED3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
