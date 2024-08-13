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

