/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * class Pair {
 * public:
 *   int *pa,*pb;
 *   Pair(int, int);
 *   Pair(const Pair &);
 *  ~Pair();
 * };
 *
 * Implement its member functions below.
 */
 
 Pair::Pair(int a, int b) {
    pa = new int;
    pb = new int;
  *pa = a;
  *pb = b;
   //std::cout << "1" << std::endl;
   //std::cout << *pa << ' ' << a << std::endl;
   //std::cout << *pb << ' ' << b << std::endl;
 }

 Pair::Pair(const Pair & obj) {
   pa = new int;
   pb = new int;
   *pa = *(obj.pa);
   *pb = *(obj.pb);

   //std::cout << "2" << std::endl;
   //std::cout << *pc <<  std::endl;
   //std::cout << *pd <<  std::endl;
 }
 
 Pair:: ~Pair() {
   //std::cout << "3" << std::endl;
 }
 
 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */
  
int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;
  
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}
