procedure main is      -- RWnonLocal.ada
        x, c, v, b :integer;
        y:boolean;

  procedure inner is
     x, a, b, s, d : integer;
     procedure nested is
     begin
        read(x);
        read(y);
        write(x+x,y and y, 6);
     end;
  begin
     nested;
  end;

begin
   inner;
end;
