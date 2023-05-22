#lang racket

(provide get-ascii)

(define (get-ascii char)
  (char->integer char))