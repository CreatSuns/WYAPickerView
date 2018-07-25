Like this

Address:

```
    WYAAddressPickerView * pickerView = [[WYAAddressPickerView alloc]init];
    pickerView.delegate = self;
    pickerView.cancelButtonColor = [UIColor redColor];
    pickerView.sureButtonColor = [UIColor redColor];
    pickerView.pickerHeight = 150;
    [pickerView show];

```

SingleRow:
    
```
WYASinglePickerView * pickerView = [[WYASinglePickerView alloc]init];
    pickerView.delegate = self;
    pickerView.cancelButtonColor = [UIColor redColor];
    pickerView.sureButtonColor = [UIColor redColor];
    pickerView.pickerHeight = 150;
    pickerView.dataSource = @[@"haha",@"hehe"];
    [pickerView show];
```



