function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/ADC */
	this.urlHashMap["untitled:13"] = "untitled.c:32,126&untitled.h:56";
	/* <Root>/Compare
To Constant */
	this.urlHashMap["untitled:19"] = "msg=&block=untitled:19";
	/* <Root>/Compare
To Constant1 */
	this.urlHashMap["untitled:20"] = "msg=&block=untitled:20";
	/* <Root>/Constant */
	this.urlHashMap["untitled:32"] = "untitled.c:62&untitled.h:70&untitled_data.c:31";
	/* <Root>/Constant1 */
	this.urlHashMap["untitled:33"] = "untitled.c:88&untitled.h:73&untitled_data.c:34";
	/* <Root>/Digital Output */
	this.urlHashMap["untitled:14"] = "untitled.c:45,131";
	/* <Root>/Digital Output1 */
	this.urlHashMap["untitled:18"] = "untitled.c:56,137";
	/* <Root>/Product */
	this.urlHashMap["untitled:31"] = "untitled.c:61";
	/* <Root>/Product1 */
	this.urlHashMap["untitled:34"] = "untitled.c:87&untitled.h:55";
	/* <Root>/eCAN Transmit */
	this.urlHashMap["untitled:22"] = "untitled.c:67";
	/* <Root>/eCAN Transmit1 */
	this.urlHashMap["untitled:35"] = "untitled.c:93";
	/* <S1>/u */
	this.urlHashMap["untitled:19:1"] = "msg=&block=untitled:19:1";
	/* <S1>/Compare */
	this.urlHashMap["untitled:19:2"] = "untitled.c:39&untitled.h:57";
	/* <S1>/Constant */
	this.urlHashMap["untitled:19:3"] = "untitled.c:40&untitled.h:64&untitled_data.c:25";
	/* <S1>/y */
	this.urlHashMap["untitled:19:4"] = "msg=&block=untitled:19:4";
	/* <S2>/u */
	this.urlHashMap["untitled:20:1"] = "msg=&block=untitled:20:1";
	/* <S2>/Compare */
	this.urlHashMap["untitled:20:2"] = "untitled.c:50&untitled.h:58";
	/* <S2>/Constant */
	this.urlHashMap["untitled:20:3"] = "untitled.c:51&untitled.h:67&untitled_data.c:28";
	/* <S2>/y */
	this.urlHashMap["untitled:20:4"] = "msg=&block=untitled:20:4";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "untitled:19"};
	this.sidHashMap["untitled:19"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "untitled:20"};
	this.sidHashMap["untitled:20"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/ADC"] = {sid: "untitled:13"};
	this.sidHashMap["untitled:13"] = {rtwname: "<Root>/ADC"};
	this.rtwnameHashMap["<Root>/Compare To Constant"] = {sid: "untitled:19"};
	this.sidHashMap["untitled:19"] = {rtwname: "<Root>/Compare To Constant"};
	this.rtwnameHashMap["<Root>/Compare To Constant1"] = {sid: "untitled:20"};
	this.sidHashMap["untitled:20"] = {rtwname: "<Root>/Compare To Constant1"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "untitled:32"};
	this.sidHashMap["untitled:32"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "untitled:33"};
	this.sidHashMap["untitled:33"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "untitled:14"};
	this.sidHashMap["untitled:14"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Digital Output1"] = {sid: "untitled:18"};
	this.sidHashMap["untitled:18"] = {rtwname: "<Root>/Digital Output1"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "untitled:31"};
	this.sidHashMap["untitled:31"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Product1"] = {sid: "untitled:34"};
	this.sidHashMap["untitled:34"] = {rtwname: "<Root>/Product1"};
	this.rtwnameHashMap["<Root>/eCAN Transmit"] = {sid: "untitled:22"};
	this.sidHashMap["untitled:22"] = {rtwname: "<Root>/eCAN Transmit"};
	this.rtwnameHashMap["<Root>/eCAN Transmit1"] = {sid: "untitled:35"};
	this.sidHashMap["untitled:35"] = {rtwname: "<Root>/eCAN Transmit1"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "untitled:19:1"};
	this.sidHashMap["untitled:19:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "untitled:19:2"};
	this.sidHashMap["untitled:19:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "untitled:19:3"};
	this.sidHashMap["untitled:19:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "untitled:19:4"};
	this.sidHashMap["untitled:19:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "untitled:20:1"};
	this.sidHashMap["untitled:20:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/Compare"] = {sid: "untitled:20:2"};
	this.sidHashMap["untitled:20:2"] = {rtwname: "<S2>/Compare"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "untitled:20:3"};
	this.sidHashMap["untitled:20:3"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "untitled:20:4"};
	this.sidHashMap["untitled:20:4"] = {rtwname: "<S2>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
