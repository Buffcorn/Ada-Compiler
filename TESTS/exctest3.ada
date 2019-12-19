-- exctest3.txt
procedure E_test is
t, big : integer;
outside_limits : exception;
test : exception;

procedure nest is
begin
   if true then
      raise test;
   end if;
   exception
      when test => raise;
end;

begin
   read(big);
   nest;
   write(big);

   exception
     when numeric_error => null;
     when outside_limits => t := big;
     when others => t := 0;
end;
