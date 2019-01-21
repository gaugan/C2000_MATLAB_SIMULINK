function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Blinky.c:90"]=1;
    this.lineTraceFlag["Blinky.c:99"]=1;
    this.lineTraceFlag["Blinky.c:108"]=1;
    this.lineTraceFlag["Blinky.c:117"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
