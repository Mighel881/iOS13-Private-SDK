//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MCLTextField, NSString;

@protocol MCLTextFieldDelegate <UITextFieldDelegate>

@optional
- (BOOL)textField:(MCLTextField *)arg1 canPerformAction:(NSString *)arg2 withSender:(id)arg3 defaultValue:(BOOL)arg4;
- (CGRect)textField:(MCLTextField *)arg1 rightViewRect:(CGRect)arg2 bounds:(CGRect)arg3;
- (CGRect)textField:(MCLTextField *)arg1 leftViewRect:(CGRect)arg2 bounds:(CGRect)arg3;
- (CGRect)textField:(MCLTextField *)arg1 clearButtonRect:(CGRect)arg2 bounds:(CGRect)arg3;
- (CGRect)textField:(MCLTextField *)arg1 editingRect:(CGRect)arg2 bounds:(CGRect)arg3;
- (CGRect)textField:(MCLTextField *)arg1 placeholderRect:(CGRect)arg2 bounds:(CGRect)arg3;
- (CGRect)textField:(MCLTextField *)arg1 textRect:(CGRect)arg2 bounds:(CGRect)arg3;
- (CGRect)textField:(MCLTextField *)arg1 borderRect:(CGRect)arg2 bounds:(CGRect)arg3;
@end

