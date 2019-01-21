function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["untitled.c:42c50"]=1;
    this.traceFlag["untitled.c:53c52"]=1;
    this.traceFlag["untitled.c:64c65"]=1;
    this.traceFlag["untitled.c:90c67"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["untitled.c:42"]=1;
    this.lineTraceFlag["untitled.c:43"]=1;
    this.lineTraceFlag["untitled.c:53"]=1;
    this.lineTraceFlag["untitled.c:54"]=1;
    this.lineTraceFlag["untitled.c:64"]=1;
    this.lineTraceFlag["untitled.c:65"]=1;
    this.lineTraceFlag["untitled.c:90"]=1;
    this.lineTraceFlag["untitled.c:91"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
