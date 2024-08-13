**SOAL NO. 1** 
<br> 
Untuk multilevel inheritance, buatlah modifikasi dengan ketentuan sebagai berikut 
(argumen fungsi dihilangkan sehingga nilainya diinputkan lewat keyboard) : 
    
<table border="1" cellpadding="10" cellspacing="0">
    <tr>
        <td>a. public test -> private test</td>
    </tr>
    <tr>
        <td>#include &lt;iostream.h&gt;</td>
    </tr>
    <tr>
        <td>#include &lt;conio.h&gt;</td>
    </tr>
    <tr>
        <td>
            class student<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;protected:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int roll_number;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int student;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void get_number();<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void put_number();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            class test : public student<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;protected:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float sub1;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float sub2;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void get_marks();<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void put_marks();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            class result : private test<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;float total;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void display();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            main()<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;result student1;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;. . . . .<br>
            &nbsp;&nbsp;&nbsp;&nbsp;getch();<br>
            }
        </td>
    </tr>
</table>


**SOAL NO. 2**
<br> 
Untuk  multilevel inheritance, buatlah modifikasi dengan ketentuan sebagai berikut 
(argumen fungsi dihilangkan sehingga nilainya diinputkan lewat keyboard) :

<table border="1" cellpadding="10" cellspacing="0">
    <tr>
        <td>b. public student &rarr; private student</td>
    </tr>
    <tr>
        <td>#include &lt;iostream.h&gt;</td>
    </tr>
    <tr>
        <td>#include &lt;conio.h&gt;</td>
    </tr>
    <tr>
        <td>
            class student<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;protected:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int roll_number;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int student;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void get_number();<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void put_number();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            class test : private student<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;protected:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float sub1;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float sub2;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void get_marks();<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void put_marks();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            class result : public test<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;float total;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void display();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            main()<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;result student1;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;. . . . .<br>
            &nbsp;&nbsp;&nbsp;&nbsp;getch();<br>
            }
        </td>
    </tr>
</table>

**SOAL NO. 3**
<br> 
Untuk  multiple inheritance, buatlah modifikasi dengan ketentuan sebagai berikut 
(argumen fungsi dihilangkan sehingga nilainya diinputkan lewat keyboard) :

<table border="1" cellpadding="10" cellspacing="0">
    <tr>
        <td>a. class P:public M, public N &rarr; class P:public M, private N</td>
    </tr>
    <tr>
        <td>#include &lt;iostream.h&gt;</td>
    </tr>
    <tr>
        <td>#include &lt;conio.h&gt;</td>
    </tr>
    <tr>
        <td>
            class M<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;protected:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int m;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void get_m();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            class N<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;protected:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int n;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void get_n(int);<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            class P : public M, private N<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void display();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            main()<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;P p;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;. . . . .<br>
            &nbsp;&nbsp;&nbsp;&nbsp;getch();<br>
            }
        </td>
    </tr>
</table>

**SOAL NO. 4**
<br> 
Untuk  multiple inheritance, buatlah modifikasi dengan ketentuan sebagai berikut 
(argumen fungsi dihilangkan sehingga nilainya diinputkan lewat keyboard) :

<table border="1" cellpadding="10" cellspacing="0">
    <tr>
        <td>b. class P:public M, public N &rarr; class P:private M, public N</td>
    </tr>
    <tr>
        <td>#include &lt;iostream.h&gt;</td>
    </tr>
    <tr>
        <td>#include &lt;conio.h&gt;</td>
    </tr>
    <tr>
        <td>
            class M<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;protected:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int m;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void get_m();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            class N<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;protected:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int n;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void get_n(int);<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            class P : private M, public N<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void display();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            main()<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;P p;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;. . . . .<br>
            &nbsp;&nbsp;&nbsp;&nbsp;getch();<br>
            }
        </td>
    </tr>
</table>

**SOAL NO. 5**
<br> 
Untuk  multiple inheritance, buatlah modifikasi dengan ketentuan sebagai berikut 
(argumen fungsi dihilangkan sehingga nilainya diinputkan lewat keyboard) :

<table border="1" cellpadding="10" cellspacing="0">
    <tr>
        <td>c. class P:public M, public N &rarr; class P:private M, private N</td>
    </tr>
    <tr>
        <td>#include &lt;iostream.h&gt;</td>
    </tr>
    <tr>
        <td>#include &lt;conio.h&gt;</td>
    </tr>
    <tr>
        <td>
            class M<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;protected:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int m;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void get_m();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            class N<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;protected:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int n;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void get_n(int);<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            class P : private M, private N<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;public:<br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;void display();<br>
            };
        </td>
    </tr>
    <tr>
        <td>
            main()<br>
            {<br>
            &nbsp;&nbsp;&nbsp;&nbsp;P p;<br>
            &nbsp;&nbsp;&nbsp;&nbsp;. . . . .<br>
            &nbsp;&nbsp;&nbsp;&nbsp;getch();<br>
            }
        </td>
    </tr>
</table>

**SOAL NO. 6**
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Class Diagram and Data Table</title>
    <style>
        body {
            font-family: Arial, sans-serif;
        }
        .diagram {
            text-align: center;
            margin-bottom: 50px;
        }
        .diagram table {
            margin: 0 auto;
            border-collapse: collapse;
            text-align: left;
        }
        .diagram td, .diagram th {
            border: 1px solid black;
            padding: 8px;
        }
        .table-container {
            margin-top: 20px;
        }
        .table-container table {
            width: 100%;
            border-collapse: collapse;
        }
        .table-container th, .table-container td {
            border: 1px solid black;
            padding: 8px;
            text-align: left;
        }
        .table-container th {
            background-color: #f2f2f2;
        }
    </style>
</head>
<body>

    <h1>Buatlah program berdasarkan class diagram dibawah ini!</h1>

    <div class="diagram">
        <table>
            <tr>
                <td colspan="3">
                    <b>FASHION</b><br>
                    <hr>
                    # Tahun : int<br>
                    # Jumlah : int<br>
                    # Harga : Float<br>
                    <hr>
                    + SetTahun(int)<br>
                    + GetTahun : int<br>
                    + SetJumlah(int)<br>
                    + GetJumlah : int<br>
                    + SetHarga(int)<br>
                    + GetHarga : int<br>
                </td>
            </tr>
            <tr>
                <td>
                    <b>SEPATU</b><br>
                    <hr>
                    # Merk : String<br>
                    # Ukuran : Float<br>
                    <hr>
                    + SetMerk(String)<br>
                    + GetMerk : String<br>
                    + SetUkuran(Float)<br>
                    + GetUkuran : Float<br>
                </td>
                <td>
                    <b>PAKAIAN</b><br>
                    <hr>
                    # Gender(L/P) : String<br>
                    # Model : String<br>
                    # Warna : String<br>
                    <hr>
                    + SetGen(L/P)(String)<br>
                    + GetGen(L/P) : String<br>
                    + SetModel(String)<br>
                    + GetModel : String<br>
                    + SetWarna(String)<br>
                    + GetWarna : String<br>
                </td>
                <td>
                    <b>AKSESORIS</b><br>
                    <hr>
                    # Jenis : String<br>
                    # Bahan : String<br>
                    <hr>
                    + SetJenis(String)<br>
                    + GetJenis : String<br>
                    + SetBahan(Float)<br>
                    + GetBahan : Float<br>
                </td>
            </tr>
        </table>
    </div>

    <div class="table-container">
        <h2>Selanjutnya inputkan data berdasarkan tabel berikut:</h2>
        <table>
            <thead>
                <tr>
                    <th>No.</th>
                    <th>Tahun</th>
                    <th>Jumlah</th>
                    <th>Harga</th>
                    <th>Gen (L/P)</th>
                    <th>Model</th>
                    <th>Warna</th>
                    <th>Merk</th>
                    <th>Jenis</th>
                    <th>Bahan</th>
                    <th>Ukuran</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>1</td>
                    <td>2020</td>
                    <td>123</td>
                    <td>IDR 120.000</td>
                    <td>L</td>
                    <td>Jaket</td>
                    <td>Hitam</td>
                    <td></td>
                    <td></td>
                    <td></td>
                    <td></td>
                </tr>
                <tr>
                    <td>2</td>
                    <td>2021</td>
                    <td>330</td>
                    <td>IDR 320.000</td>
                    <td>P</td>
                    <td>Dress</td>
                    <td>Merah</td>
                    <td></td>
                    <td></td>
                    <td></td>
                    <td></td>
                </tr>
                <tr>
                    <td>3</td>
                    <td>2022</td>
                    <td>10</td>
                    <td>IDR 1.400.000</td>
                    <td></td>
                    <td></td>
                    <td></td>
                    <td>Nike</td>
                    <td></td>
                    <td></td>
                    <td>38</td>
                </tr>
                <tr>
                    <td>4</td>
                    <td>2020</td>
                    <td>24</td>
                    <td>IDR 120.000</td>
                    <td>L</td>
                    <td>Kemaja</td>
                    <td>Biru</td>
                    <td></td>
                    <td></td>
                    <td></td>
                    <td></td>
                </tr>
                <tr>
                    <td>5</td>
                    <td>2021</td>
                    <td>33</td>
                    <td>IDR 120.000</td>
                    <td></td>
                    <td>Kaos</td>
                    <td>Putih</td>
                    <td></td>
                    <td></td>
                    <td></td>
                    <td></td>
                </tr>
                <tr>
                    <td>6</td>
                    <td>2022</td>
                    <td>56</td>
                    <td>IDR 120.000</td>
                    <td></td>
                    <td></td>
                    <td></td>
                    <td></td>
                    <td>Sabuk</td>
                    <td>Kain</td>
                    <td></td>
                </tr>
                <tr>
                    <td>7</td>
                    <td>2019</td>
                    <td>34</td>
                    <td>IDR 80.000</td>
                    <td></td>
                    <td></td>
                    <td></td>
                    <td></td>
                    <td>Topi</td>
                    <td>Kulit</td>
                    <td></td>
                </tr>
                <tr>
                    <td>8</td>
                    <td>2017</td>
                    <td>8</td>
                    <td>IDR 3.000.000</td>
                    <td></td>
                    <td></td>
                    <td></td>
                    <td>Adidas</td>
                    <td></td>
                    <td></td>
                    <td>42</td>
                </tr>
            </tbody>
        </table>
    </div>

</body>
</html>

