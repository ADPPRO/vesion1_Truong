#include "stdafx.h"
#include "CppUnitTest.h"
#include"Sach.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TEST_getMasach)
		{
			Sach a;
			a.setMasach("MH01");
			string sach = "MH01";
			string sach1 = "pokemon";
			Assert::AreEqual(a.getMasach(),sach);
			Assert::AreNotEqual(a.getMasach(), sach1);
		}
		TEST_METHOD(TEST_getTensach)
		{
			Sach a; 
			a.setTensach("pokemon");
			string sach = "pokemon";
			string sach1 = "pokedef";
			Assert::AreEqual(a.getTensach(), sach);
			Assert::AreNotEqual(a.getTensach(), sach1);
		}
		TEST_METHOD(TEST_getNamxb)
		{
			Sach a;
			a.setNamxb("1999");
			string nam = "1999";
			string nam1 = "2000";
			Assert::AreEqual(a.getNamxb(), nam);
			Assert::AreNotEqual(a.getNamxb(), nam1);
		}
		TEST_METHOD(TEST_getSoluong)
		{
			Sach a;
			a.setSoluong("8");
			string soluong = "8";
			string soluong1 = "9"; 
			Assert::AreEqual(a.getSoluong(),soluong);
			Assert::AreNotEqual(a.getSoluong(),soluong1);
		}
		TEST_METHOD(TEST_getDongia)
		{
			Sach a;
			a.setDongia("5600");
			string dongia = "5600";
			string dongia1 = "0";
			Assert::AreEqual(a.getDongia(), dongia);
			Assert::AreNotEqual(a.getDongia(), dongia1);
		}
		TEST_METHOD(TEST_getTinhtrang)
		{
			Sach a;
			a.setTinhtrang("su dung");
			string tinhtrang = "su dung";
			string tinhtrang1 = "hong";
			Assert::AreEqual(a.getTinhtrang(), tinhtrang);
			Assert::AreNotEqual(a.getTinhtrang(), tinhtrang1);
		}
		TEST_METHOD(TEST_getNgonngu)
		{
			Sach a;
			a.setNgonngu("Anh");
			string ngonngu = "Anh";
			string ngonngu1 = "My";
			Assert::AreEqual(a.getNgonngu(), ngonngu);
			Assert::AreNotEqual(a.getNgonngu(), ngonngu1);
		}
		TEST_METHOD(TEST_getTentacgia)
		{
			Sach a;
			a.setTentacgia("hung");
			string tentacgia = "hung";
			string tentacgia1 = "pokedef";
			Assert::AreEqual(a.getTentacgia(), tentacgia);
			Assert::AreNotEqual(a.getTentacgia(), tentacgia1);
		}
	};
}