function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Data Type Conversion */
	this.urlHashMap["Basic_Test:8"] = "Basic_Test.c:49,54,59,64";
	/* <Root>/LED */
	this.urlHashMap["Basic_Test:6"] = "Basic_Test.c:48,84,100&Basic_Test.h:60&Basic_Test_data.c:38";
	/* <Root>/LED1 */
	this.urlHashMap["Basic_Test:9"] = "Basic_Test.c:53,87,103&Basic_Test.h:63&Basic_Test_data.c:44";
	/* <Root>/LED2 */
	this.urlHashMap["Basic_Test:10"] = "Basic_Test.c:58,90,106&Basic_Test.h:66&Basic_Test_data.c:50";
	/* <Root>/LED3 */
	this.urlHashMap["Basic_Test:11"] = "Basic_Test.c:63,93,109&Basic_Test.h:69&Basic_Test_data.c:56";
	/* <Root>/Pulse
Generator */
	this.urlHashMap["Basic_Test:7"] = "Basic_Test.c:34,46,81&Basic_Test.h:42,48,51,54,57&Basic_Test_data.c:25,28,31,34";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Basic_Test"};
	this.sidHashMap["Basic_Test"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Data Type Conversion"] = {sid: "Basic_Test:8"};
	this.sidHashMap["Basic_Test:8"] = {rtwname: "<Root>/Data Type Conversion"};
	this.rtwnameHashMap["<Root>/LED"] = {sid: "Basic_Test:6"};
	this.sidHashMap["Basic_Test:6"] = {rtwname: "<Root>/LED"};
	this.rtwnameHashMap["<Root>/LED1"] = {sid: "Basic_Test:9"};
	this.sidHashMap["Basic_Test:9"] = {rtwname: "<Root>/LED1"};
	this.rtwnameHashMap["<Root>/LED2"] = {sid: "Basic_Test:10"};
	this.sidHashMap["Basic_Test:10"] = {rtwname: "<Root>/LED2"};
	this.rtwnameHashMap["<Root>/LED3"] = {sid: "Basic_Test:11"};
	this.sidHashMap["Basic_Test:11"] = {rtwname: "<Root>/LED3"};
	this.rtwnameHashMap["<Root>/Pulse Generator"] = {sid: "Basic_Test:7"};
	this.sidHashMap["Basic_Test:7"] = {rtwname: "<Root>/Pulse Generator"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
