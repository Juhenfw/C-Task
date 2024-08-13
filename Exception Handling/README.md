# Study Case

# Soal 1

Buatlah program yang memuat class `Time` dengan ketentuan sebagai berikut:

a. Mempunyai constructor  
b. Terdapat function untuk menjumlahkan 2 object `Time`  
c. Untuk `setTime(...)` diberikan seperti berikut

```cpp
// set new Time value using universal time
void Time::setTime(int h, int m, int s)
{
    // validate hour, minute and second
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
    {
        hour = h;
        minute = m;
        second = s;
    }
    else
        throw invalid_argument(
            "hour, minute and/or second was out of range");
}
// end function setTime
```

d. Gunakan code berikut di main()-nya:
```cpp
try
{
    Time t5(27, 74, 99); // all bad values specified
} // end try
catch (invalid_argument &e)
{
    cout << "\n\nException while initializing t5: " << e.what() << endl;
} // end catch
```

# Soal 2

Buatlah program yang memuat class `OperasiMatematika` yang bisa digunakan penjumlahan dan pembagian 2 bilangan dengan ketentuan sebagai berikut:

a. Mempunyai constructor  
b. Untuk pembagian, terdapat kasus pembagi tidak boleh sama dengan nol; untuk mengatasinya gunakan `try-catch`.

# Soal 3

Buatlah program yang memuat class `Array1DimInteger` yang bisa digunakan penjumlahan 2 array 1 dimensi dengan ketentuan sebagai berikut:

a. Mempunyai constructor  
b. Untuk menampilkan nilai-nilai array, gunakan method `displayArray()`  
c. Di dalam `main()`, buat object `integer1` dengan panjang array 7 dan lakukan perintah sesuai code berikut:

```cpp
// attempt to use out-of-range subscript
try
{
    cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
    integers1[15] = 1000; // ERROR: subscript out of range
} // end try
catch (out_of_range &ex)
{
    cout << "An exception occurred: " << ex.what() << endl;
} // end catch
```

# Soal 4

Buatlah program yang memuat class `OpMat` yang bisa digunakan menghitung akar kuadrat suatu bilangan dengan ketentuan sebagai berikut:

a. Mempunyai constructor, fungsi setter, dan getter  
b. Untuk input bilangan, gunakan `try-throw-catch` seperti kode berikut:

```cpp
try // Look for exceptions that occur within try block and route to attached catch block(s)
{
    // If the user entered a negative number, this is an error condition
    if (x < 0.0)
        throw "Cannot take square root of negative number"; // throw exception of type const char*
    
    // Otherwise, print the answer
    std::cout << "The sqrt of " << x << " is " << std::sqrt(x) << '\n';
}
catch (const char* exception) // catch exceptions of type const char*
{
    std::cerr << "Error: " << exception << '\n';
}

