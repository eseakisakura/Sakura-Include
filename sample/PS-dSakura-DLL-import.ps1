Write-host "Hello World!"

Add-Type -Assembly "System.Runtime"

$cscode = @"
	[DllImport("dSakura.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
	// [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool MMLtoMIDI(
	string mmlText,
	string fileName,
	System.Text.StringBuilder errorMessage);

	[DllImport("dSakura.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
	public extern static void GetVerInfo(System.Text.StringBuilder version);

	[DllImport("dSakura.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
	public extern static void SetErrMsgLen(int Len);
"@

	Add-Type -name ApiFunctions -namespace Win32 -memberDefinition $cscode # -passthru

	$compilerMessage=New-Object System.Text.StringBuilder(65536)
	[Win32.ApiFunctions]::SetErrMsgLen($compilerMessage.Capacity)


	[bool] $result= $False
	# [string] $srcMmlText= "r2 `"a`"bcdefg``a"
	[string] $srcMmlText= "r2 `"a`"bcdefg ' ``c``a ' "

	[string] $dstSmfFileName= "test-test.mid"

	$result= [Win32.ApiFunctions]::MMLtoMIDI($srcMmlText, $dstSmfFileName, $compilerMessage)

	write-host $result
	write-host $compilerMessage.ToString()

	$versionString=New-Object System.Text.StringBuilder(4096)
	[Win32.ApiFunctions]::GetVerInfo($versionString)
	write-host $versionString.ToString()

	read-host "pause"
