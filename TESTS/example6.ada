procedure test is
   a, b : integer;      
   c : boolean;     

begin
   if a = b then
      write(a);
   elsif c then
      a := b;
   elsif b < a then
      b := 6;
   else
      c := false;
   end if;
   b := 2;
end;


