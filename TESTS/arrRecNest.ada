procedure main is
   type aType is array (0..2) of integer;
   type dateType is record
      day : aType;
      year : integer;
   end record;
   arr  : aType;
   date : dateType;
   c    : integer;

   procedure green is
      c : dateType;
   begin
      date.day (1) := 5 + 3;
      c.year := 4;
   end;

begin
   arr(1) := date.year;
   date.year := date.day (1);
end;
