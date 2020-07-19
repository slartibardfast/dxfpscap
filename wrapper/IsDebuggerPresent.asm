.386
.model flat

extern _IsDebuggerPresentProxy@0:proc

public __imp__IsDebuggerPresent@0
public _IsDebuggerPresent@0

.data

  __imp__IsDebuggerPresent@0 dd flat:_IsDebuggerPresent@0

.code

_IsDebuggerPresent@0:
	jmp _IsDebuggerPresentProxy@0

end