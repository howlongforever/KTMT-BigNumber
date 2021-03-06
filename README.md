# KTMT-BigNumber
### Chạy chương trình:
Chương trình khi chạy có 2 lựa chọn là chạy với tham số truyền vào hoặc chạy trực tiếp tập tin thực thi exe.
#### Chạy chương trình với tham số truyền vào:
Tại cửa sổ dòng lệnh, chạy **1712441_1712227_17122666.exe [input] [output] [type]**
với:
- [input] : địa chỉ tập tin chứa dữ liệu đầu vào
- [output]: địa chỉ tập tin chương trình sẽ ghi kết quả tính toán
- [type] : loại phép tính trong tập tin dữ liệu đầu vào, giá trị là 1 nếu các phép tính là số nguyên, 2 nếu các phép tính là số thực
#### Chạy chương trình từ tập tin thực thi:
Khi mở tập tin **1712441_1712227_17122666.exe** lên, người dùng nhập vào địa chỉ tập tin chứa dữ liệu đầu vào và địa chỉ tập tin ghi kết quả tính toán.

### Nhập xuất file:
#### File input:
Mỗi dòng chứa 1 phép chuyển đổi hệ số hoặc phép tính. Các dữ liệu ngăn cách nhau bằng dấu cách (khoảng trắng).
- Đối với phép chuyển hệ số, thứ tự dữ liệu trình bày như sau:
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