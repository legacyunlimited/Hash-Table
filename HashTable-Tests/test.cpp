#include "pch.h"
#include "../Hash Table/HashTable.h"


/*
* 
* 
* 
* phase 1 Test Cases
* 
* 
*/
TEST(HashTableCrateTest, HashTableCreate) {
  HashTable<int, int>* hashTable = new HashTable<int, int>(10);
  EXPECT_EQ(hashTable->table[0], nullptr);
  EXPECT_TRUE(true);
}

TEST(HashTablAddTest, HashTableAdd) {
	Node<int, int>* ptr = new Node<int, int>(15,153);
	HashTable<int, int>* hashTable = new HashTable<int, int>(10);
	hashTable->insertByChaining(ptr);
	EXPECT_EQ(hashTable->table[5], ptr);
	EXPECT_EQ(hashTable->table[5]->getData(), 153);
	EXPECT_TRUE(true);
}

TEST(HashTableSearchTest, HashTableSearch) {
	Node<int, int>* ptr = new Node<int, int>(15, 153);
	Node<int, int>* ptr1 = new Node<int, int>(14, 5);
	Node<int, int>* ptr2 = new Node<int, int>(11, 53);
	Node<int, int>* ptr3 = new Node<int, int>(17, 13);
	HashTable<int, int>* hashTable = new HashTable<int, int>(10);
	hashTable->insertByChaining(ptr);
	hashTable->insertByChaining(ptr1);
	hashTable->insertByChaining(ptr2);
	hashTable->insertByChaining(ptr3);
	EXPECT_EQ(hashTable->search(14,5), ptr1);
	EXPECT_TRUE(true);
}

TEST(HashTableDeleteTest, HashTableDelete) {
	Node<int, int>* ptr = new Node<int, int>(15, 153);
	Node<int, int>* ptr1 = new Node<int, int>(14, 5);
	Node<int, int>* ptr2 = new Node<int, int>(11, 53);
	Node<int, int>* ptr3 = new Node<int, int>(17, 13);
	HashTable<int, int>* hashTable = new HashTable<int, int>(10);
	hashTable->insertByChaining(ptr);
	hashTable->insertByChaining(ptr1);
	hashTable->insertByChaining(ptr2);
	hashTable->insertByChaining(ptr3);
	EXPECT_EQ(hashTable->deleteByKey(11), ptr2);
	EXPECT_TRUE(true);
}


/*
*
*
* 
* Phase 2 TestCases
* 
* 
*/


TEST(LinearProbingTest, LinearProbing) {
	Node<int, int>* ptr = new Node<int, int>(15, 153);
	Node<int, int>* ptr1 = new Node<int, int>(14, 5);
	Node<int, int>* ptr2 = new Node<int, int>(11, 53);
	Node<int, int>* ptr3 = new Node<int, int>(177, 133);
	Node<int, int>* ptr4 = new Node<int, int>(147, 123);
	Node<int, int>* ptr5 = new Node<int, int>(317, 113);
	HashTable<int, int>* hashTable = new HashTable<int, int>(5);
	hashTable->insertByLinearProbing(ptr);
	hashTable->insertByLinearProbing(ptr1);
	hashTable->insertByLinearProbing(ptr2);
	hashTable->insertByLinearProbing(ptr3);
	int x=hashTable->insertByLinearProbing(ptr4);
	EXPECT_EQ(x,1);
	EXPECT_EQ(hashTable->insertByLinearProbing(ptr5),-1);
	EXPECT_TRUE(true);
}


TEST(SearchLinearProbingTest, SearchLinearProbing) {
	Node<int, int>* ptr = new Node<int, int>(5, 153);
	Node<int, int>* ptr1 = new Node<int, int>(10, 5);
	HashTable<int, int>* hashTable = new HashTable<int, int>(2);
	hashTable->insertByLinearProbing(ptr);
	hashTable->insertByLinearProbing(ptr1);
	EXPECT_EQ(hashTable->SearchByKeyLinear(10), ptr1);
	EXPECT_TRUE(true);
}

TEST(DeleteLinearProbingTest, DeleteLinearProbing) {
	Node<int, int>* ptr = new Node<int, int>(5, 153);
	Node<int, int>* ptr1 = new Node<int, int>(10, 5);
	HashTable<int, int>* hashTable = new HashTable<int, int>(2);
	hashTable->insertByLinearProbing(ptr);
	hashTable->insertByLinearProbing(ptr1);
	EXPECT_EQ(hashTable->deleteByKeyLinear(10), true);
	EXPECT_TRUE(true);
}



TEST(QuadreticProbingTest, QuadreticProbing) {
	Node<int, int>* ptr = new Node<int, int>(15, 153);
	Node<int, int>* ptr1 = new Node<int, int>(14, 5);
	Node<int, int>* ptr2 = new Node<int, int>(11, 53);
	Node<int, int>* ptr3 = new Node<int, int>(177, 133);
	Node<int, int>* ptr4 = new Node<int, int>(147, 123);
	Node<int, int>* ptr5 = new Node<int, int>(317, 113);
	HashTable<int, int>* hashTable = new HashTable<int, int>(5);
	hashTable->insertByQuadreticProbing(ptr);
	hashTable->insertByQuadreticProbing(ptr1);
	hashTable->insertByQuadreticProbing(ptr2);
	hashTable->insertByQuadreticProbing(ptr3);
	int x = hashTable->insertByQuadreticProbing(ptr4);
	EXPECT_EQ(x, 1);
	EXPECT_EQ(hashTable->insertByLinearProbing(ptr5), -1);
	EXPECT_TRUE(true);
}



TEST(SearchQuadreticProbingTest, SearchQuadreticProbing) {
	Node<int, int>* ptr = new Node<int, int>(5, 153);
	Node<int, int>* ptr1 = new Node<int, int>(10, 5);
	HashTable<int, int>* hashTable = new HashTable<int, int>(2);
	hashTable->insertByQuadreticProbing(ptr);
	hashTable->insertByQuadreticProbing(ptr1);
	EXPECT_EQ(hashTable->SearchByKeyQuadretic(10), ptr1);
	EXPECT_TRUE(true);
}

TEST(DeleteQuadreticProbingTest, DeleteQuadreticProbing) {
	Node<int, int>* ptr = new Node<int, int>(5, 153);
	Node<int, int>* ptr1 = new Node<int, int>(10, 5);
	HashTable<int, int>* hashTable = new HashTable<int, int>(2);
	hashTable->insertByQuadreticProbing(ptr);
	hashTable->insertByQuadreticProbing(ptr1);
	EXPECT_EQ(hashTable->deleteByKeyQuadretic(10), true);
	EXPECT_TRUE(true);
}