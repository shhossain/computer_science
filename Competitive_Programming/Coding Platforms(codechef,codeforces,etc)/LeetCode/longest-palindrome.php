<?php

class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function longestPalindrome($s) {
        if (strlen($s) == 1) {
            return 1;
        }
        
        $s = str_split($s);
        $sAux = $s;
        $middleLetter = '';
        $matchedIndexes = [];
        $total = 0;
        
        for ($i=0; $i < count($s); $i++) {
            if (in_array($i, $matchedIndexes)) {
                continue;
            }
            
            $currentChar = $s[$i];
            unset($sAux[$i]);
            $matchedIndexes[] = $i;
            
            $pairIndex = array_search($currentChar, $sAux);
            
            if ($pairIndex === false) {
                if ($middleLetter === '') {
                    
                    $middleLetter = $currentChar;
                    $total++;
                }
                
                continue;
            }
            
            $matchedIndexes[] = $pairIndex;
            unset($sAux[$pairIndex]);
            $total += 2;
            
        }
        
        return $total;
    }    
}