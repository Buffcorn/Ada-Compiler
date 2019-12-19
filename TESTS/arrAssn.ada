--arrAssn.ada

procedure main is
   type arr is array ( 0 .. 4 ) of integer;
   type another is array ( 3 .. 5 ) of integer;
   a, b : arr;
   c    : another;

begin
   b := a;
   c(3 .. 5) := a(0 ..2);
end;


