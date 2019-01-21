function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Duty */
	this.urlHashMap["Trial:8"] = "Trial.h:48&Trial_data.c:25";
	/* <Root>/Duty control for Active Load  */
	this.urlHashMap["Trial:2"] = "Trial.c:251";
	/* <Root>/High-Low Side Driver Signal */
	this.urlHashMap["Trial:1"] = "Trial.c:29,45";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Trial"};
	this.sidHashMap["Trial"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Duty"] = {sid: "Trial:8"};
	this.sidHashMap["Trial:8"] = {rtwname: "<Root>/Duty"};
	this.rtwnameHashMap["<Root>/Duty control for Active Load "] = {sid: "Trial:2"};
	this.sidHashMap["Trial:2"] = {rtwname: "<Root>/Duty control for Active Load "};
	this.rtwnameHashMap["<Root>/High-Low Side Driver Signal"] = {sid: "Trial:1"};
	this.sidHashMap["Trial:1"] = {rtwname: "<Root>/High-Low Side Driver Signal"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
