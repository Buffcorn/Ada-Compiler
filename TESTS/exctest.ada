-- exctest.txt
procedure E_test is
t, big : integer;
outside_limits : exception;

begin
   read(t);
   big := 10;
   if t > big then
      raise outside_limits;
   end if;
   write(t);
end;
