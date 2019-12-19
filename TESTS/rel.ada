procedure Main is       --rel.ada
   X,Y,Z : integer;
   A : integer;
begin                           --this is a test

  
   X := X and Y;   
   Y := X or Y;   
   X := X = Y;   
   Y := Z < Y;   
   Z := Z <= X;   
   X := Y > Z;   
   Y := Z >= X;
   
   Y := not X;   
   Z := - Y;

   A := X + X * Z * Y;
end;
