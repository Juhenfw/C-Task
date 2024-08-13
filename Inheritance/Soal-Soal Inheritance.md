**SOAL NO. 1** 
<tr> 
Untuk multilevel inheritance, buatlah modifikasi dengan ketentuan sebagai berikut 
(argumen fungsi dihilangkan sehingga nilainya diinputkan lewat keyboard) : 
<tr>
<tr>
    
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
Untuk  multilevel inheritance, buatlah modifikasi dengan ketentuan sebagai berikut 
(argumen fungsi dihilangkan sehingga nilainya diinputkan lewat keyboard) :
