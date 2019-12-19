--staticExpr.ada

procedure main is
   a     : integer;
   limit : constant integer := 48;
   low   : constant integer := limit / 4;
   type w is array(0..2) of integer;
   d     : w;


begin
    a := 1 + 2 * 3;       --  7 is stored
    a := 5 * low;         -- 60 is stored
    write (limit + 2);    -- 50 is written
    d(1+1) := 17;         -- 17 stored at d(2)
end;

