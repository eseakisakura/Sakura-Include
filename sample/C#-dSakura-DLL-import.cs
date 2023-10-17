using System;
using System.Text;
using System.Runtime.InteropServices;

namespace ConsoleApp1
{

class Program
{
	static void Main(string[] args)
	{
		Console.WriteLine("Hello World!");

		StringBuilder compilerMessage = new StringBuilder(65536);
		NativeMethods.SetErrMsgLen(compilerMessage.Capacity);

		bool result = false;

		// string srcMmlText= "r2 \"a\"bcdefg`a";
		string srcMmlText= @"r2 ""a""bcdefg '`c`a' ";
		string dstSmfFileName= "test-test.mid";

		result = NativeMethods.MMLtoMIDI(srcMmlText, dstSmfFileName, compilerMessage);

		Console.WriteLine(result);
		Console.WriteLine(compilerMessage.ToString());

		StringBuilder versionString = new StringBuilder(4096);
		NativeMethods.GetVerInfo(versionString);

		Console.WriteLine(versionString.ToString());

		Console.ReadKey();
	}
}

public static class NativeMethods
{
	[DllImport("dSakura.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
	// [return: MarshalAs(UnmanagedType.U1)]
	public static extern bool MMLtoMIDI(
	string mmlText,
	string fileName,
	StringBuilder errorMessage);

	[DllImport("dSakura.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
	public extern static void GetVerInfo(StringBuilder version);

	[DllImport("dSakura.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
	public extern static void SetErrMsgLen(int Len);
}

}
