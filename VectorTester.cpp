#include <iostream>
#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

int main()
{
   CharacterVector cv;
   DoubleVector    dv;
   IntegerVector   iv;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;

   std::cout << dv.size() << " " << "The result should be:" << " 0" << std::endl;
   dv.put(1.1);
   std::cout << dv.size() << " " << "The result should be:" << " 1" << std::endl;
   std::cout << dv.get(0) << " " << "The result should be:" << " 1.1" << std::endl;
   dv.put(2.2);
   dv.put(3.3);
   std::cout << dv.get(1) << " " << "The result should be:" << " 2.2" << std::endl;
   std::cout << dv.get(2) << " " << "The result should be:" << " 3.3" << std::endl;
  
   dv.put(4.4, 3);
   dv.put(0.0, 0);
   std::cout << dv.get(0) << " " << "The result should be:" << " 0" << std::endl;
   std::cout << dv.get(3) << " " << "The result should be:" << " 4.4" << std::endl;

   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;

   std::cout << iv.size() << " " << "The result should be:" << " 0" << std::endl;
   iv.put(1);
   std::cout << iv.size() << " " << "The result should be:" << " 1" << std::endl;
   std::cout << iv.get(0) << " " << "The result should be:" << " 1" << std::endl;
   iv.put(4);
   iv.put(8);
   std::cout << iv.get(1) << " " << "The result should be:" << " 4" << std::endl;
   std::cout << iv.get(2) << " " << "The result should be:" << " 8" << std::endl;

   iv.put(11, 0);
   std::cout << iv.get(0) << " " << "The result should be:" << "11" << std::endl;

   std::cout << "--------------" << std::endl;
   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   dv2.appendIntegerVector(iv);
   std::cout << dv2.get(0) << " " << "The result should be:" << " 11" << std::endl;
   std::cout << dv2.get(1) << " " << "The result should be:" << " 4" << std::endl;

   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;
   iv2.appendDoubleVector(dv);
   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << iv2.size() << " " << "The result should be:" << "4" << std::endl;
   std::cout << iv2.get(0) << " " << "The result should be:" << "0" << std::endl;
   std::cout << iv2.get(1) << " " << "The result should be:" << "2" << std::endl;

   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
