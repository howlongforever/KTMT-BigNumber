# KTMT-BigNumber

### Nhập xuất file:
#### File input:
Mỗi dòng chứa 1 phép chuyển đổi hệ số hoặc phép tính. Các dữ liệu ngăn cách nhau bằng dấu cách (khoảng trắng).
- Đối với phép chuyển, thứ tự dữ liệu trình bày như sau:
	- Số đầu tiên chỉ hệ số hiện tại, có giá trị thuộc {2(binary), 10(decimal), 16(hexa)}. 
	- Số tiếp theo là hệ số cần chuyển đến.
	- Cuối cùng là dữ liệu biểu diễn số cần chuyển.
- Đối với phép tính, thứ tự dữ liệu trình bày như sau:
	- Số đầu tiên chỉ hệ số thực hiện phép tính, có giá trị thuộc:{2(binary QInt), 10(decimal QInt), 16(hexa QInt), 2F(binary of floating point), F(Decimal floating point)}.
	- Tiếp theo là dữ liệu biểu diễn của toán hạng đầu tiên.
	- Dấu của phép tính, thuộc các dấu {+, -, *, /}. Đối với số nguyên thì còn có các phép {<<, >>, &, |, ^}
	- Cuối cùng là toán hạng thứ 2 của phép tính.

#### File output:
Mỗi dòng của file output tương ứng với mỗi phép tính hoặc phép chuyển hệ số trên mỗi dòng của file input.