package hiding;

public class MyDate {
	/**
	 * 문제
	 * day, month, year 변수는 private으로 선언
	 * 각 변수의 get, set 메서드를 public으로 생성
	 * MyDate(int day, int month, int year) 생성자를 만듦
	 * public boolean isValid() 메서드를 만들어 날짜가 유효한지 확인
	 * MyDateTest 클래스에서 생성한 MyDate 날짜가 유효한지 확인
	 */
	private int day;
	private int month;
	private int year;
	private boolean isValid = true;
	
	public MyDate(int day, int month, int year) {
		setYear(year);
		setMonth(month);
		setDay(day);
	}
	
	public int getDay() {
		return day;
	}
	
	public void setDay(int day) {
		switch(month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if(day < 1 || day > 31) {
				isValid = false;
			} else {
				this.day = day;
			}
			break;
		
		// 윤년은 제외함
		case 2:
			if(day < 1 || day > 28) {
				isValid = false;
			} else {
				this.day = day;
			}
			break;
			
		case 4: case 6: case 9: case 11:
			if(day < 1 || day > 30) {
				isValid = false;
			} else {
				this.day = day;
			}
			break;
		}
	} // setDay END
		
	public int getMonth() {
		return month;
	}
	
	public void setMonth(int month) {
		if(month < 1 || month > 12) {
			isValid = false;
		} else {
			this.month = month;
		}
	}
	
	public int getYear() {
		return year;
	}
	
	public void setYear(int year) {
		if(year < 0) {
			isValid = false;
		} else {
			this.year = year;
		}
	}
	
	public String isValid() {
		if(isValid) {
			return "유효한 날짜입니다.";
		} else {
			return "유효하지 않은 날짜입니다.";
		}
	}
		
}
