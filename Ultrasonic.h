class Ultrasonic{
	public:
		Ultrasonic(uint8_t tr,uint8_t ec);
		void init();
		unsigned int distance();
	private:
		uint8_t _tr_p;
		uint8_t _ec_p;
}
