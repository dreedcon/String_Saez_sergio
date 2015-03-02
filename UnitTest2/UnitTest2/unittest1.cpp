#include "stdafx.h"
#include "CppUnitTest.h"
#include <stdarg.h>

#include "../../Project5/Project5/Class_String.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(MethodCo)
		{
			
			String a("hello");
			String b("hello");

			Assert::IsTrue(a == b);
		}

		TEST_METHOD(MethodDi)
		{

			String a("hello");
			String b("hi");

			Assert::IsTrue(a != b);
		}
	    
		TEST_METHOD(MethodDCo1)
		{

			String a("hello");
			char*  b("hello");

			Assert::IsTrue(a == b);
		}

		TEST_METHOD(MethodDi2)
		{

			String a("hello");
			char*  b("hi");

			Assert::IsTrue(a != b);
		}
	    
		TEST_METHOD(MethodEq)
		{

			String a("hello");
			String b("helo");
			a = b;

			Assert::IsTrue(a == b);
		}

		TEST_METHOD(MethodEq1)
		{

			String a("hello");
			char* b("helo");
			a = b;

			Assert::IsTrue(a == b);
		}
	
		TEST_METHOD(MethodIn)
		{

			String a("hello");
			String b("hi");
			
			a += b;
            
			Assert::IsTrue(a == "hellohi");
		}
	
		TEST_METHOD(MethodIn1)
		{

			String a("hello");
			char* b("helo");

			a += b;

			Assert::IsTrue(a == "hellohelo");
		}
	
		TEST_METHOD(MethodLen)
		{
            String a("hello");
			Assert::IsTrue(strlen(a.string));
		}
	    
		TEST_METHOD(Methodlen)
		{
			String a("hello");
			
			Assert::IsTrue(strlen(a.string));
		}

		TEST_METHOD(MethodCa)
		{
			String a("hello");
			Assert::IsTrue( strlen(a.string) - 1);
		}
	
		TEST_METHOD(MethodCl)
		{
			String a("hello");
			
			a.clear();

			Assert::IsTrue(a == "");
		}

	};
}