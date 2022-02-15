#include<iostream>
#include "Node.h"
#include "HashTable.h"
#include <chrono> 
#include <ctime>
using namespace std;
using namespace std::chrono;
int main() {
	int mainChoice;
	cout << "*********Welcome*********" << endl;
	cout << "Choose\n 1. Performance Analysis \n 2. Exit\n Please Enter : ";
	cin >> mainChoice;
	if (mainChoice == 1) {
		srand(time(0));
		{
			cout << "\nPerforming Insert Test for 100 Random Integers By Chaining\n";
			HashTable<int, int>* hashTable1 = new HashTable<int, int>(100);
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				int key = (rand() % 1000) + 1;
				int value = (rand() % 1000) + 1;
				Node<int, int>* ptr = new Node<int, int>(key, value);
				hashTable1->insertByChaining(ptr);

			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Insert 100 Integers is: "
				<< duration.count() << " microseconds" << endl;



			cout << "\nPerforming Search Test for 100 Random Integers By Chaining\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->searchByKey(key);
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Search 100 Integers is: "
				<< duration1.count() << " microseconds" << endl;





			cout << "\nPerforming Delete Test for 100 Random Integers By Chaining\n";
			auto start2 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->deleteByKey(key);
			}
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 100 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;




		}

		{
			cout << "\nPerforming Insert Test for 100 Random Integers By Linear Probing\n";
			HashTable<int, int>* hashTable1 = new HashTable<int, int>(100);
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				int key = (rand() % 1000) + 1;
				int value = (rand() % 1000) + 1;
				Node<int, int>* ptr = new Node<int, int>(key, value);
				hashTable1->insertByLinearProbing(ptr);

			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Insert 100 Integers is: "
				<< duration.count() << " microseconds" << endl;



			cout << "\nPerforming Search Test for 100 Random Integers By Linear Probing\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->SearchByKeyLinear(key);
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Search 100 Integers is: "
				<< duration1.count() << " microseconds" << endl;





			cout << "\nPerforming Delete Test for 100 Random Integers By Linear Probing\n";
			auto start2 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->deleteByKeyLinear(key);
			}
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 100 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;




		}



		{
			cout << "\nPerforming Insert Test for 100 Random Integers By Quadretic Probing\n";
			HashTable<int, int>* hashTable1 = new HashTable<int, int>(100);
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				int key = (rand() % 1000) + 1;
				int value = (rand() % 1000) + 1;
				Node<int, int>* ptr = new Node<int, int>(key, value);
				hashTable1->insertByQuadreticProbing(ptr);

			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Insert 100 Integers is: "
				<< duration.count() << " microseconds" << endl;



			cout << "\nPerforming Search Test for 100 Random Integers By Quadretic Probing\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->SearchByKeyQuadretic(key);
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Search 100 Integers is: "
				<< duration1.count() << " microseconds" << endl;





			cout << "\nPerforming Delete Test for 100 Random Integers By Quadretic Probing\n";
			auto start2 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->deleteByKeyQuadretic(key);
			}
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 100 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;




		}



		{
			cout << "\nPerforming ADD Test for 1000 Random Integers By Chaining\n";
			HashTable<int, int>* hashTable1 = new HashTable<int, int>(1000);
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				int key = (rand() % 1000) + 1;
				int value = (rand() % 1000) + 1;
				Node<int, int>* ptr = new Node<int, int>(key, value);
				hashTable1->insertByChaining(ptr);

			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Add 1000 Integers is: "
				<< duration.count() << " microseconds" << endl;


			cout << "\nPerforming Search Test for 1000 Random Integers By Chaining\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->searchByKey(key);
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Search 1000 Integers is: "
				<< duration1.count() << " microseconds" << endl;




			cout << "\nPerforming Delete Test for 1000 Random Integers By Chaining\n";
			auto start2 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->deleteByKey(key);
			}
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 1000 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;
		}




		{
			cout << "\nPerforming ADD Test for 1000 Random Integers By Linear Probing\n";
			HashTable<int, int>* hashTable1 = new HashTable<int, int>(1000);
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				int key = (rand() % 1000) + 1;
				int value = (rand() % 1000) + 1;
				Node<int, int>* ptr = new Node<int, int>(key, value);
				hashTable1->insertByLinearProbing(ptr);

			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Add 1000 Integers is: "
				<< duration.count() << " microseconds" << endl;


			cout << "\nPerforming Search Test for 1000 Random Integers By Linear Probing\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->SearchByKeyLinear(key);
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Search 1000 Integers is: "
				<< duration1.count() << " microseconds" << endl;




			cout << "\nPerforming Delete Test for 1000 Random Integers By Linear Probing\n";
			auto start2 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->deleteByKeyLinear(key);
			}
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 1000 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;
		}


		{
			cout << "\nPerforming ADD Test for 1000 Random Integers By Quadretic Probing\n";
			HashTable<int, int>* hashTable1 = new HashTable<int, int>(1000);
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				int key = (rand() % 1000) + 1;
				int value = (rand() % 1000) + 1;
				Node<int, int>* ptr = new Node<int, int>(key, value);
				hashTable1->insertByQuadreticProbing(ptr);

			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Add 1000 Integers is: "
				<< duration.count() << " microseconds" << endl;


			cout << "\nPerforming Search Test for 1000 Random Integers By Quadretic Probing\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->SearchByKeyQuadretic(key);
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Search 1000 Integers is: "
				<< duration1.count() << " microseconds" << endl;




			cout << "\nPerforming Delete Test for 1000 Random Integers By Quadretic Probing\n";
			auto start2 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->deleteByKeyQuadretic(key);
			}
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 1000 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;
		}



		{
			cout << "\nPerforming ADD Test for 10000 Random Integers By Chaining\n";
			HashTable<int, int>* hashTable1 = new HashTable<int, int>(10000);
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				int key = (rand() % 1000) + 1;
				int value = (rand() % 1000) + 1;
				Node<int, int>* ptr = new Node<int, int>(key, value);
				hashTable1->insertByChaining(ptr);

			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Add 10000 Integers is: "
				<< duration.count() << " microseconds" << endl;



			cout << "\nPerforming Search Test for 10000 Random Integers By Chaining\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->searchByKey(key);
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Search 10000 Integers is: "
				<< duration1.count() << " microseconds" << endl;



			cout << "\nPerforming Delete Test for 10000 Random Integers By Chaining\n";
			auto start2 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->searchByKey(key);
			}
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 10000 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;
		}


		{
			cout << "\nPerforming ADD Test for 10000 Random Integers By Linear Probing\n";
			HashTable<int, int>* hashTable1 = new HashTable<int, int>(10000);
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				int key = (rand() % 1000) + 1;
				int value = (rand() % 1000) + 1;
				Node<int, int>* ptr = new Node<int, int>(key, value);
				hashTable1->insertByLinearProbing(ptr);

			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Add 10000 Integers is: "
				<< duration.count() << " microseconds" << endl;


			cout << "\nPerforming Search Test for 10000 Random Integers By Linear Probing\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->SearchByKeyLinear(key);
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Search 10000 Integers is: "
				<< duration1.count() << " microseconds" << endl;




			cout << "\nPerforming Delete Test for 10000 Random Integers By Linear Probing\n";
			auto start2 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				int key = (rand() % 1000) + 1;
				hashTable1->deleteByKeyLinear(key);
			}
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 10000 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;
		}


		{
			cout << "\nPerforming ADD Test for 10000 Random Integers By Quadretic Probing\n";
			HashTable<int, int>* hashTable1 = new HashTable<int, int>(10000);
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				int key = (rand() % 10000) + 1;
				int value = (rand() % 10000) + 1;
				Node<int, int>* ptr = new Node<int, int>(key, value);
				hashTable1->insertByQuadreticProbing(ptr);

			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Add 10000 Integers is: "
				<< duration.count() << " microseconds" << endl;


			cout << "\nPerforming Search Test for 10000 Random Integers By Quadretic Probing\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				int key = (rand() % 10000) + 1;
				hashTable1->SearchByKeyLinear(key);
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Search 10000 Integers is: "
				<< duration1.count() << " microseconds" << endl;
				



			cout << "\nPerforming Delete Test for 10000 Random Integers By Quadretic Probing\n";
			auto start2 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				int key = (rand() % 10000) + 1;
				hashTable1->deleteByKeyLinear(key);
			}
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 10000 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;
		}

	}
else {
cout << "You Exited the Code!" << endl;
	}
	return 0;

}