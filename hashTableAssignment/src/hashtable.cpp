#include "hashtable.h"
#include <iostream>

int hash_code(const string& str)
{
   int h = 0;
   for (int i = 0; i < str.length(); i++)
   {
      h = 31 * h + str[i];
   }
   return h;
}

HashTable::HashTable(int nbuckets)
{
   for (int i = 0; i < nbuckets; i++)
   {
      buckets.push_back(nullptr);
   }
   current_size = 0;
}

int HashTable::count(const string& x)
{
   int h = hash_code(x);
   h = h % buckets.size();
   if (h < 0) { h = -h; }

   Node* current = buckets[h];
   while (current != nullptr)
   {
      if (current->data == x) { return 1; }
      current = current->next;
   }
   return 0;
}

void HashTable::insert(const string& x)
{
   int h = hash_code(x);
   h = h % buckets.size();
   if (h < 0) { h = -h; }

   Node* current = buckets[h];

   while (current != nullptr)
   {
      if (current-> data == x) { return; }
         // Already in the set
      current = current->next;
   }

   Node* new_node = new Node;
   new_node->data = x;
   new_node->next = buckets[h];
   new_node->previous = nullptr;


   if(buckets[h] != nullptr)
   {
       buckets[h]->previous = new_node;
       cout <<"Hi: " << endl;
   }

   buckets[h] = new_node;
   current_size++;
}

void HashTable::erase(const string& x)
{
   int h = hash_code(x);
   h = h % buckets.size();
   if (h < 0) { h = -h; }

   Node* current = buckets[h];
   Node* previous = nullptr;
   while (current != nullptr)
   {
      if (current->data == x)
      {
         if (previous == nullptr)
         {
            buckets[h] = current->next;
         }
         else
         {
            previous->next = current->next;
         }
         delete current;
         current_size--;
         return;
      }
      previous = current;
      current = current->next;
   }
}

int HashTable::size() const
{
   return current_size;
}

Iterator HashTable::begin() const
{
   Iterator iter;
   iter.current = nullptr;
   iter.bucket_index = -1;
   iter.container = this;
   iter.next();
   return iter;
}

Iterator HashTable::end() const
{
   Iterator iter;
   iter.current = nullptr;
   iter.bucket_index = buckets.size();
   iter.container = this;
   return iter;
}

string Iterator::get() const
{
    if(current == nullptr){
        cout << "ERROR: Tried retrieving data from a NULLPTR..." << endl;
    }
    else if(container == nullptr){
        cout << "ERROR: Tried to get() on an empty container? How is that possible." << endl;
    }
    else
    {
        return current->data;
    }
}

bool Iterator::equals(const Iterator& other) const
{
   return current == other.current;
}

void Iterator::next()
{
    cout << "heeddd" << endl;
    if(container == nullptr){
        cout << "ERROR: Tried to next() on an empty HashTable..." << endl;
        return;
    }


   if (bucket_index >= 0 && current->next != nullptr)
   {
      // Advance in the same bucket
      current = current->next;
   }
   else
   {
      // Move to the next bucket
      do
      {
         bucket_index++;
      }
      while (bucket_index < container->buckets.size() && container->buckets[bucket_index] == nullptr);

      if (bucket_index < container->buckets.size())
      {
         // Start of next bucket
         current = container->buckets[bucket_index];
      }
      else
      {
         // No more buckets
         cout << "You've reached the end of the HashTable. Goodbye!" << endl;
         current = nullptr;
      }
   }
}

void Iterator::previous()
{
   if (bucket_index > 0)
   {
       if(current->previous == nullptr)
       {
           cout << "Sending you back to the previous bucket..." << endl;
           current = container->buckets[bucket_index - 1];

           do
           {
               bucket_index--;
               current = container->buckets[bucket_index];
           }while(bucket_index > 0 && current == nullptr);
       }
       else
       {
           cout << "Sending you back to the previous node in the same bucket..." << endl;
           current = current->previous;
       }
   }

}
