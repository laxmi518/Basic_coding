import System.Environment
import  Control.Monad 


main = do
    args <- getArgs
    let first_divisor = args !! 0
    let second_divisor = args !! 1
    let upper_bound = args !! 2

    let x = read first_divisor :: Integer
    let y = read second_divisor :: Integer
    let z = read upper_bound :: Integer
 
 

    forM_ [1..z] $ \number -> do
        putStr $ show number++"\n "
        when (0 == number `mod` x) $
            putStr "Fizz"
        when (0 == number `mod` y) $
            putStr "Buzz"
        when ((0 /= number `mod` x) &&(0 /= number `mod` y))  $
            putStr $ show number++" not divisible by any"
        putStr " \n"    





