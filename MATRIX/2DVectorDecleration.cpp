/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5, 3);
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;
    return 0;
}*/
/*3 3 3 3 3*/
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int> >v(3,3);
    return 0;
}*/
/*error: no matching constructor for initialization of 'vector<vector<int> >'
   20 |     vector<vector<int> >v(3,3);
      |                         ^ ~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:429:55: note: candidate constructor not viable: no known conversion from 'int' to 'const value_type' (aka 'const std::vector<int>') for 2nd argument
  429 |   _LIBCPP_CONSTEXPR_SINCE_CXX20 _LIBCPP_HIDE_FROM_ABI vector(size_type __n, const value_type& __x);
      |                                                       ^                     ~~~~~~~~~~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:505:3: note: candidate constructor not viable: no known conversion from 'int' to 'const vector<vector<int> >' for 1st argument
  505 |   vector(const vector& __x, const __type_identity_t<allocator_type>& __a);
      |   ^      ~~~~~~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:528:3: note: candidate constructor not viable: no known conversion from 'int' to 'vector<vector<int> >' for 1st argument
  528 |   vector(vector&& __x, const __type_identity_t<allocator_type>& __a);
      |   ^      ~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:445:55: note: candidate template ignored: substitution failure [with _InputIterator = int]: no type named 'reference' in 'std::iterator_traits<int>'
  443 |                               is_constructible<value_type, typename iterator_traits<_InputIterator>::reference>::value,
      |                                                                                                      ~~~~~~~~~
  444 |                           int> = 0>
  445 |   _LIBCPP_CONSTEXPR_SINCE_CXX20 _LIBCPP_HIDE_FROM_ABI vector(_InputIterator __first, _InputIterator __last);
      |                                                       ^
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:458:55: note: candidate template ignored: substitution failure [with _ForwardIterator = int]: no type named 'reference' in 'std::iterator_traits<int>'
  456 |                         is_constructible<value_type, typename iterator_traits<_ForwardIterator>::reference>::value,
      |                                                                                                  ~~~~~~~~~
  457 |                     int> = 0>
  458 |   _LIBCPP_CONSTEXPR_SINCE_CXX20 _LIBCPP_HIDE_FROM_ABI vector(_ForwardIterator __first, _ForwardIterator __last);
      |                                                       ^
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:417:64: note: candidate constructor not viable: requires single argument '__a', but 2 arguments were provided
  417 |   _LIBCPP_CONSTEXPR_SINCE_CXX20 _LIBCPP_HIDE_FROM_ABI explicit vector(const allocator_type& __a)
      |                                                                ^      ~~~~~~~~~~~~~~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:425:64: note: candidate constructor not viable: requires single argument '__n', but 2 arguments were provided
  425 |   _LIBCPP_CONSTEXPR_SINCE_CXX20 _LIBCPP_HIDE_FROM_ABI explicit vector(size_type __n);
      |                                                                ^      ~~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:503:55: note: candidate constructor not viable: requires single argument '__x', but 2 arguments were provided
  503 |   _LIBCPP_CONSTEXPR_SINCE_CXX20 _LIBCPP_HIDE_FROM_ABI vector(const vector& __x);
      |                                                       ^      ~~~~~~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:520:55: note: candidate constructor not viable: requires single argument '__x', but 2 arguments were provided
  520 |   _LIBCPP_CONSTEXPR_SINCE_CXX20 _LIBCPP_HIDE_FROM_ABI vector(vector&& __x)
      |                                                       ^      ~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:433:3: note: candidate constructor template not viable: requires 3 arguments, but 2 were provided
  433 |   vector(size_type __n, const value_type& __x, const allocator_type& __a)
      |   ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:451:3: note: candidate constructor template not viable: requires 3 arguments, but 2 were provided
  451 |   vector(_InputIterator __first, _InputIterator __last, const allocator_type& __a);
      |   ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:466:3: note: candidate constructor template not viable: requires 3 arguments, but 2 were provided
  466 |   vector(_ForwardIterator __first, _ForwardIterator __last, const allocator_type& __a);
      |   ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/vector:415:55: note: candidate constructor not viable: requires 0 arguments, but 2 were provided
  415 |   _LIBCPP_CONSTEXPR_SINCE_CXX20 _LIBCPP_HIDE_FROM_ABI vector()
      |                                                       ^
1 error generated.*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int> >v(3, vector<int> (4,2));
    cout << v.size() << endl;
    cout << v[2][2] << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << v[1].size() << endl;
    return 0;
}