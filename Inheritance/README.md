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

<br>

**SOAL NO. 6**
<br>
Buatlah program berdasarkan class diagram dibawah ini!

<h2>Class Diagram</h2>

<div style="display: flex; justify-content: center;">
    <div style="border: 1px solid black; padding: 10px; margin: 10px; width: 200px;">
        <b>FASHION</b><br>
        <hr>
        <p># Tahun : int<br>
        # Jumlah : int<br>
        # Harga : Float</p>
        <hr>
        <p>+ SetTahun(int)<br>
        + GetTahun : int<br>
        + SetJumlah(int)<br>
        + GetJumlah : int<br>
        + SetHarga(int)<br>
        + GetHarga : int</p>
    </div>
</div>

<div style="display: flex; justify-content: center;">
    <div style="border: 1px solid black; padding: 10px; margin: 10px; width: 200px;">
        <b>SEPATU</b><br>
        <hr>
        <p># Merk : String<br>
        # Ukuran : Float</p>
        <hr>
        <p>+ SetMerk(String)<br>
        + GetMerk : String<br>
        + SetUkuran(Float)<br>
        + GetUkuran : Float</p>
    </div>
    <div style="border: 1px solid black; padding: 10px; margin: 10px; width: 200px;">
        <b>PAKAIAN</b><br>
        <hr>
        <p># Gender(L/P) : String<br>
        # Model : String<br>
        # Warna : String</p>
        <hr>
        <p>+ SetGen(L/P)(String)<br>
        + GetGen(L/P) : String<br>
        + SetModel(String)<br>
        + GetModel : String<br>
        + SetWarna(String)<br>
        + GetWarna : String</p>
    </div>
    <div style="border: 1px solid black; padding: 10px; margin: 10px; width: 200px;">
        <b>AKSESORIS</b><br>
        <hr>
        <p># Jenis : String<br>
        # Bahan : String</p>
        <hr>
        <p>+ SetJenis(String)<br>
        + GetJenis : String<br>
        + SetBahan(Float)<br>
        + GetBahan : Float</p>
    </div>
</div>

<h2>Selanjutnya inputkan data berdasarkan tabel berikut:</h2>

<table style="width: 100%; border-collapse: collapse;">
    <thead>
        <tr>
            <th style="border: 1px solid black; padding: 8px;">No.</th>
            <th style="border: 1px solid black; padding: 8px;">Tahun</th>
            <th style="border: 1px solid black; padding: 8px;">Jumlah</th>
            <th style="border: 1px solid black; padding: 8px;">Harga</th>
            <th style="border: 1px solid black; padding: 8px;">Gen (L/P)</th>
            <th style="border: 1px solid black; padding: 8px;">Model</th>
            <th style="border: 1px solid black; padding: 8px;">Warna</th>
            <th style="border: 1px solid black; padding: 8px;">Merk</th>
            <th style="border: 1px solid black; padding: 8px;">Jenis</th>
            <th style="border: 1px solid black; padding: 8px;">Bahan</th>
            <th style="border: 1px solid black; padding: 8px;">Ukuran</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td style="border: 1px solid black; padding: 8px;">1</td>
            <td style="border: 1px solid black; padding: 8px;">2020</td>
            <td style="border: 1px solid black; padding: 8px;">123</td>
            <td style="border: 1px solid black; padding: 8px;">IDR 120.000</td>
            <td style="border: 1px solid black; padding: 8px;">L</td>
            <td style="border: 1px solid black; padding: 8px;">Jaket</td>
            <td style="border: 1px solid black; padding: 8px;">Hitam</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
        </tr>
        <tr>
            <td style="border: 1px solid black; padding: 8px;">2</td>
            <td style="border: 1px solid black; padding: 8px;">2021</td>
            <td style="border: 1px solid black; padding: 8px;">330</td>
            <td style="border: 1px solid black; padding: 8px;">IDR 320.000</td>
            <td style="border: 1px solid black; padding: 8px;">P</td>
            <td style="border: 1px solid black; padding: 8px;">Dress</td>
            <td style="border: 1px solid black; padding: 8px;">Merah</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
        </tr>
        <tr>
            <td style="border: 1px solid black; padding: 8px;">3</td>
            <td style="border: 1px solid black; padding: 8px;">2022</td>
            <td style="border: 1px solid black; padding: 8px;">10</td>
            <td style="border: 1px solid black; padding: 8px;">IDR 1.400.000</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;">Nike</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;">38</td>
        </tr>
        <tr>
            <td style="border: 1px solid black; padding: 8px;">4</td>
            <td style="border: 1px solid black; padding: 8px;">2020</td>
            <td style="border: 1px solid black; padding: 8px;">24</td>
            <td style="border: 1px solid black; padding: 8px;">IDR 120.000</td>
            <td style="border: 1px solid black; padding: 8px;">L</td>
            <td style="border: 1px solid black; padding: 8px;">Kemaja</td>
            <td style="border: 1px solid black; padding: 8px;">Biru</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
        </tr>
        <tr>
            <td style="border: 1px solid black; padding: 8px;">5</td>
            <td style="border: 1px solid black; padding: 8px;">2021</td>
            <td style="border: 1px solid black; padding: 8px;">33</td>
            <td style="border: 1px solid black; padding: 8px;">IDR 120.000</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;">Kaos</td>
            <td style="border: 1px solid black; padding: 8px;">Putih</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
        </tr>
        <tr>
            <td style="border: 1px solid black; padding: 8px;">6</td>
            <td style="border: 1px solid black; padding: 8px;">2022</td>
            <td style="border: 1px solid black; padding: 8px;">56</td>
            <td style="border: 1px solid black; padding: 8px;">IDR 120.000</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;">Sabuk</td>
            <td style="border: 1px solid black; padding: 8px;">Kain</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
        </tr>
        <tr>
            <td style="border: 1px solid black; padding: 8px;">7</td>
            <td style="border: 1px solid black; padding: 8px;">2019</td>
            <td style="border: 1px solid black; padding: 8px;">34</td>
            <td style="border: 1px solid black; padding: 8px;">IDR 80.000</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;">Topi</td>
            <td style="border: 1px solid black; padding: 8px;">Kulit</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
        </tr>
        <tr>
            <td style="border: 1px solid black; padding: 8px;">8</td>
            <td style="border: 1px solid black; padding: 8px;">2017</td>
            <td style="border: 1px solid black; padding: 8px;">8</td>
            <td style="border: 1px solid black; padding: 8px;">IDR 3.000.000</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;">Adidas</td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;"></td>
            <td style="border: 1px solid black; padding: 8px;">42</td>
        </tr>
    </tbody>
</table>




