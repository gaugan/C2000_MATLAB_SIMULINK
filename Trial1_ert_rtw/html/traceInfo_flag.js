function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Trial1.c:90c32"]=1;
    this.traceFlag["Trial1.c:90c58"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Trial1.c:90"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
